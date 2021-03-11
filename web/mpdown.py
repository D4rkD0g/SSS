

'''
python3 -m http.server太慢了，和axel一起最多~300k/s
所以需要一个多线程脚本，能达到~4MB/s
'''


import sys, os, socket
from socketserver import ThreadingMixIn
from http.server import SimpleHTTPRequestHandler, HTTPServer

HOST = socket.gethostname()
PORT = 8000
CWD = os.getcwd()

class ThreadingSimpleServer(ThreadingMixIn, HTTPServer):
    pass

server = ThreadingSimpleServer(('0.0.0.0', PORT), SimpleHTTPRequestHandler)

while 1:
    sys.stdout.flush()
    server.handle_request()

#apt install axel
#axel -n 30 -o xx http://xxx/xxx