import requests
from bs4 import BeautifulSoup
import time
import random

headers = {
  'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.116 Safari/537.35',
}

xiladaili = "http://www.xiladaili.com/https/"
proxylist = []


f = open("ips.txt", "w+")

for page in range(2, 11):
	url = xiladaili + "{}".format(page)

	r = requests.get(url, headers=headers, timeout=5) 
	if r.status_code != 200:
		print(url, r.status_code)
		print("Connect Error")
		exit(-1)

	soup=BeautifulSoup(r.text, features="lxml")

	ips = soup.find_all(name='table',attrs={"class":"fl-table"})
	if len(ips) == 0:
		print("No ips")
		continue
		
	for tr in ips[0].findAll("tr"):
		if tr.td == None:
			continue
		ip = tr.td.text
		print(ip)
		f.write(ip + "\n")
	time.sleep(random.randint(1, 4))

f.close()


