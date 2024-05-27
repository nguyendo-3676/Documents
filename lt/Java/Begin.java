public class Begin {
    public static void main(String[] args) {

      final int x = 5000;
      double myDouble = 5.6789;
      double Double = x;
      int myInt = (int ) myDouble;
      String hihi = "Hello ";
      String hehe = "World!";
      hihi = hihi.toLowerCase(); // viet thuong tat ca cac chu cai
      System.out.println(hihi);
      hihi = hihi.toUpperCase();  // viet hoa tat ca cac chu cai
      System.out.println(hihi);

      int lengthHihi = hihi.length(); // tra ve chieu dai cua chuoi ky tu
      int indexHihi = hihi.indexOf('H'); // tra ve vi tri xuat hien lan dau tien cua tu ma ban tim kiem
      
      System.out.println(indexHihi);

      System.out.println(hihi.concat(hehe)); // noi 2 String

      System.out.println(hihi + "World!");
      System.out.print(hihi + "Do dz");
      System.out.println(", your salary is: " + x + "$");
      System.out.println(myInt);
      System.out.println(Double);
      System.out.println(x > myDouble); // tra ve gia tri true neu dung , false neu sai
  }
}