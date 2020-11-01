import pandas_datareader as pdr
import datetime

start = datetime.datetime(2018,1,1)
end = datetime.datetime.today

stock = 'BSE'
pdr.DataReader(stock, ‘yahoo’, start, end)
