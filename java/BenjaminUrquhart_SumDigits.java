//I did them one better: put the entire class on one line (on my phone, no less)
interface SumDigits{static void main(String[]a){System.out.println(a.length==0?"Usage: java SumDigits <number>":a[0].chars().reduce(0,(x,y)->x+y-'0'));}}
