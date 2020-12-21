import inspect


def add(a, b):
    frame = inspect.currentframe()

    print("上一个帧栈:{0}".format(frame.f_back))
    print("当前帧对象执行的代码对象:{0}".format(frame.f_code))
    print("当前帧对象所见的global名称空间:{0}".format(frame.f_globals))
    print("当前指令索引:{0}".format(frame.f_lasti))
    print("当前指令索引:{0}".format(frame.f_lasti))
    print("源代码的当前行号:{0}".format(frame.f_lineno))
    print("当前帧对象所见的local名称空间:{0}".format(frame.f_locals))
    return a + b


if __name__ == '__main__':
    add(1, 2)