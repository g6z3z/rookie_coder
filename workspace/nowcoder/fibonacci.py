#-*- conding:utf-8 -*-
import sys
class Fibnoacci:
        def fast_fibonacci(self, n):
            if n<=1:
                return n
            a = 0
            b = 1
            ret = 0
            for i in range(0,n-1):
                ret = a+b
                a = b
                b = ret
            return ret
if __name__ == '__main__':
        s = Fibnoacci()
        print(s.fast_fibonacci(5))
                
