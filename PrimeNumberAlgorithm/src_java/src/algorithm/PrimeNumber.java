//Author: Sean Benson
//Date: 3/6/2019
package algorithm;

import java.util.ArrayList;
import java.text.DecimalFormat;

//reference: https://www.youtube.com/watch?v=TDGETBsPKjQ by Joe James
public class PrimeNumber {

	public static void main(String[] args) {
		ArrayList<Integer> primeList = new ArrayList<>();
		double prevousTime, currentTime;
		prevousTime = System.nanoTime();
		int max = 10000000;
		for(int x = 2; x <= max ; x++) {
			boolean isPrime = true;
			for (int y = 2; y < Math.sqrt(x); y++) {
				if(x % y == 0) {
					isPrime = false;
					break;
				}
			}
			if(isPrime)
				primeList.add(x);
		}
		currentTime = System.nanoTime();
		
		//System.out.println(primeList);
		System.out.println(time(currentTime,prevousTime) + " microseconds");
	}
	
	private static double time(double currentTime, double prevousTime) {
		double gap1 = (currentTime - prevousTime) / 1000;
		return gap1;
	}
}
