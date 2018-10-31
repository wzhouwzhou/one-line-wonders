object onlyEvenDigits{
  def main(args: Array[String]): Unit = {
    val n : Long = scala.io.StdIn.readLine.toLong
    if(n.toString.forall(_.asDigit % 2 == 0)) println("all digits are even")
  }
}
