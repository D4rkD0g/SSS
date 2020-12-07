import mmh3
import requests
import base64
import sys

# python3
# xx.py URL/PATH

#https://github.com/pielco11/fav-up
def webico(url):
	response = requests.get(url)
	favicon = response.content
	return favicon


def localico(path):
	with open(path, "rb") as f:
		favicon = f.read()
	return favicon


if __name__ == '__main__':
	uri = sys.argv[1]
	if uri.startswith("http"):
		favicon = webico(uri)
	else:
		favicon = localico(uri)

	hash = mmh3.hash(base64.encodebytes(favicon))
	print("http.favicon.hash:{}".format(hash))