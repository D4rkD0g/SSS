import requests
from bs4 import BeautifulSoup
import time
import random

headers = {
  'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.116 Safari/537.35',
}

xiladaili = "http://www.xiladaili.com/"


class ProxyFetcher(object):
	"""docstring for ProxyFetcher"""
	def __init__(self):
		super(ProxyFetcher, self).__init__()
		self.proxylist = set()

	def get_xila(self, htype="http"):
		for page in range(2, 3):
			url = xiladaili + "{}/{}".format(htype, page)

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
				self.proxylist.add(ip)
			time.sleep(random.randint(1, 4))

	def write_file(self):
		with open("ips.txt", "w+") as f:
			for ip in self.proxylist:
				f.write(ip + "\n")


if __name__ == '__main__':
	pf = ProxyFetcher()
	pf.get_xila(htype="https")
	pf.write_file()
