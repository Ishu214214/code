import time
from functools import lru_cache

@lru_cache(maxsize=3)
def ab(n):
    time.sleep(n)
    return n

if __name__== "__main__":
    print('rinning...')
    ab(3)
    print('again calling')
    ab(3)
    print('done')