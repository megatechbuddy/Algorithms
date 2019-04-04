#Author: Sean Benson
from math import sqrt

class Prime_Number_Generator:
    def __init__(self, max_number):
        self.max_number = max_number #limit the prime number search to this number

    def Calculate_Primes(self):
        prime_list = []
        for x in range(2, self.max_number):
            is_prime_bool = True
            for y in range(2, int(sqrt(x) + 1)):
                if(x%y == 0):
                    is_prime_bool = False
                    break
            if(is_prime_bool):
                prime_list.append(x)
        return prime_list
