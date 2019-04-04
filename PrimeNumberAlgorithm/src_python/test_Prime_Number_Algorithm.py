#Author: Sean Benson
#This is the unit test for the Prime_Number_Algorithm.py
from Prime_Number_Algorithm import Prime_Number_Generator
from timeit import default_timer as timer
import unittest
#from quantities import units
#import pytest

max_number = 1000
png = Prime_Number_Generator(max_number)
start = timer()
output = png.Calculate_Primes()
end = timer()
total_time = (end - start) #* pq.second
#print(output)
#print('Found',len(output),'prime numbers.')
#print('Time to run the prime number generator for numbers under',\
#     max_number, 'is', total_time)


#unit test
class test_ex1(unittest.TestCase):
    def test_constructor(self):
         self.assertEqual(output[0], 2)