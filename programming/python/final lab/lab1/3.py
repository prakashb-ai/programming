sec=int(input('enter a seconds:-'))

mins=sec//60
sec=sec%60
hr=mins//60
mins=mins%60
print(hr,mins,sec)