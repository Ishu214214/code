def search():
    import time
    time.sleep(4)
    book ='hello this is ishu kumar'

    while True:
        text=(yield)
        if text in book:
            print('in the text')

        else:
            print("not in text")    


ser=search()            

next(ser)
ser.send('ishu')