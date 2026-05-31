import java.util.ArrayList;
import java.util.Random;


public class GaloisF {

	static ArrayList<Integer> remainder = new ArrayList<Integer>();
	static ArrayList<Integer> quotient = new ArrayList<Integer>();
	static ArrayList<Integer> auxiliary = new ArrayList<Integer>();
	
	
	
	public static void main( String[] args){
		
//		System.out.println(galoisMultiply(202, 82));
		String fx =  "100011011";
		String input = "0101100110";
		
		remainder.add(binaryToDecimal(fx));
		remainder.add(binaryToDecimal(input));
		
		auxiliary.add(0);
		auxiliary.add(1);
		
		quotient.add(0);
		quotient.add(0);
		
		System.out.println(binaryToDecimal(fx));
		System.out.println(binaryToDecimal(input));
		
		getInverse();
		
		System.out.println(binaryToDecimal("01101010"));
		byte a = (byte) 100011011;
		byte b = (byte) 011001101;
		
		int f =binaryToDecimal(fx);
		int in = binaryToDecimal(input);
		
		int x = 0, y= 0 ;
		
		do{
			
			x = new Random().nextInt(f);
			
			
		}while( (in*x)%f != 1%f);
		
		System.out.println( "x = " + x);
		System.out.println( "x = " + decimalToBinary(x));
		
		System.out.println(galoisMultiply(a, b));
		System.out.println(decimalToBinary(Math.abs(galoisMultiply(a, b))));
		System.out.println(FFMul(a, FFMul(a, b)));
		System.out.println(decimalToBinary(Math.abs(FFMul(a, FFMul(a, b)))));
		System.out.println(GMul(a, b));
	}
	
	public static void getInverse(){
		
		int i = 1;
		
		while( remainder.get(i) > 1){
			i++;
			
			remainder.add(i, remainder.get(i-2)%remainder.get(i-1));

			System.out.println( "Remainder " + decimalToBinary(Math.abs(remainder.get(i))));
			
			quotient.add(i, remainder.get(i-2)/remainder.get(i-1));

			System.out.println("Quotient " + decimalToBinary(Math.abs(quotient.get(i))));
			
			auxiliary.add(i, -quotient.get(i)*auxiliary.get(i-1)+  auxiliary.get(i-2));

			System.out.println("auxiliary " + decimalToBinary(Math.abs(auxiliary.get(i))));
			System.out.println();
		}
		
//		System.out.println(auxiliary.get(i));
		System.out.println(decimalToBinary(Math.abs(auxiliary.get(i))));	
	}
	
	
	public static String decimalToBinary(int decimal){
		return Integer.toBinaryString(decimal);
	}
	
	
	
	public static int binaryToDecimal(String bin){
		
		char[] binary = bin.toCharArray();
		int power = 0;
		int base = 2;
		int answer = 0;
		for(char ch: binary){
			
			if( ch == '1'){
				
				answer += Math.pow(base, power);
				
				power++;
			}else{
				
				
				power++;
			}
		}
		
		return answer;
	}
	
	

	private static int galoisMultiply(byte a, byte b) {
        
        int p = 0;
         
        for (int n=0; n<8; n++) {
             
           p = ((b & 0x01) > 0) ? p^a : p;
            
           boolean ho = ((a & 0x80) > 0);
            
           a = (byte) ((a<<1) & 0xFE);
            
           if (ho)
              a = (byte) (a ^ 0x1b);
            
           b = (byte) ((b>>1) & 0x7F);
        }
        return p;
     }

	
	public static byte FFMul(byte a, byte b) {
		   byte aa = a, bb = b, r = 0, t;
		   
		   while (aa != 0) {
		      if ((aa & 1) != 0)
		         r = (byte) (r ^ bb);
		      t = (byte) (bb & 0x80);
		      bb = (byte) (bb << 1);
		      if (t != 0)
		         bb = (byte) (bb ^ 0x1b);
		      aa = (byte) (aa >> 1); 
		   }
		   return r;
		}
	
	
	public static Byte GMul(Byte a, Byte b) { // Galois Field (256) Multiplication
		
		   Byte p = 0;
		   Byte counter;
		   Byte hi_bit_set;
		   for (counter = 0; counter < 8; counter++) {
		      if ((b & 1) != 0) {
		         p = (byte) (p ^ a);
		      }
		      hi_bit_set = (byte) (a & 0x80);
		      a = (byte) (a << 1);
		      if (hi_bit_set != 0) {
		         a = (byte) (a ^ 0x1b); /* x^8 + x^4 + x^3 + x + 1 */
		      }
		      b = (byte) (b >> 1);
		   }
		   return p;
		}
}
