import json
import xlwt
import sys

PAPERDATA = {}

class PureData(object):
	"""docstring for PureData"""
	def __init__(self, jsonfile):
		super(PureData, self).__init__()
		self.jsonfile = jsonfile
		self.paperdata = {}
		self.wb = xlwt.Workbook(encoding= 'ascii')
		self.wsht = self.wb.add_sheet("first")
		self.headers = ['title', 'content', 'link', 'authors', 'venue', 'year', 'tags']

	def write_head(self):
		self.headers = list(self.paperdata[0].keys())
		#headers = ['title', 'content', 'link', 'authors', 'venue', 'year', 'tags']
		for idx, header in enumerate(self.headers):
			self.write_paper_data(0, idx, header)

	def write_paper_data(self, row, column, data):
		self.wsht.write(row, column, data)
		print(row, column, data)

	def save_xls(self, path):
		self.wb.save(path)

	def load_json(self):
		with open(self.jsonfile, "rb") as f:
			self.paperdata = json.load(f)["paper"]

	def write_data(self):
		papercnt = len(self.paperdata)
		for idx in range(papercnt):
			onepaper = self.paperdata[idx].items()
			print(onepaper)
			for k,v in onepaper:
				self.write_paper_data(idx+1, self.headers.index(k), v)


def main(jsonfile):
	pd = PureData(jsonfile)
	pd.load_json()
	pd.write_head()
	pd.write_data()
	pd.save_xls("paperlist.xls")


if __name__ == '__main__':
	if len(sys.argv) != 2:
		print("./pickmeup.py <jsonfile>")
		exit(-1)
	jsonfile = sys.argv[1]
	main(jsonfile)
"""
import json
import xlwings as xw


wb = xw.Book()
sht = wb.sheets['Sheet1']

sht[0,0] = "test"

sht[10,10] = "test"

wb.save('example.xlsx')
wb.close()


"""
