#include <idc.idc>

static main() {
  //SetShortPrm(INF_AF2, GetShortPrm(INF_AF2) | AF2_DODATA);

  Wait();

  auto file = GetIdbPath()[0:-4] + ".asm";
  auto fp = fopen(file, "w+");  

  //deleted sensitive actions

  
  fseek(fp, 0, SEEK_SET);  
  
  auto end = 500;
  auto cursize = 0;
  while(end) {
    print("read new pos:");
    print(ftell(fp));
    auto line = readstr(fp);
    auto linelen = strlen(line);


    if (/*strlen(trim(line))==0 && */strstr(line, "====")!=-1) {
        break;
    }


    print("read new line:");
    print(line);
    fseek(fp, cursize, SEEK_SET);  
    print("before write pos:");
    print(ftell(fp));
    writestr(fp, strfill(32, linelen));
    auto wptr = ftell(fp);
    print("after write pos:");
    print(ftell(fp));
    fseek(fp, 0, SEEK_SET);  
    line = readstr(fp);
    print("after write:", line);
    fseek(fp, wptr, SEEK_SET);  
    print("====================");
    cursize = cursize + linelen;


    end = end - 1;
  }


  fclose(fp);

 Exit(0);                              // exit to OS, error code 0 - success
}
