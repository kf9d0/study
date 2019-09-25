```java
// App1.java
public class App1 {
 public static void main(String[] args) {
  System.out.println("3+4="+(3+4)+", Hello Java!");
 }
}
```

```java
// App2.java
public class TestApplet extends java.applet.Applet {
 int x,y;
 public void init() {
  x=7,y=9;
 }
 public void paint(java.awt.Graphics g) {
  g.drawString("the class define two variables: x=7, y=9",50,60);
  g.drawString("sum is: "+(x+y),50,80);
  g.drawString("subtraction is: "+(x-y),50,100);
 }
}
// javac TestApplet.java
// java TestApplet //Wrongi

import java.awt.*;
import javax.swing.JApplet;
public class App2_2 extends JApplet {
 public void paint(Graphics g) {
  g.drawString("Hello Java!",50,50);
 }
}
```
```html
<!--vimx page1.html-->
<html>
 <body>
  <applet code=TestApplet.class width=250 height=150></applet>
 </body>
</html>
// Open TestApplet.html with a broswer. Wrong: display nothing in Edge, Chrome. neigher d.drawString() nor <applet alt="">;
// appletviewer TestApplet.html. Succeed.

<!--App2_2.html-->
<html>
 <applet code="App2_2.class" width="200" height="120" alt="Sorry, your broswer doesn't support Java Applet. ">
 </applet>
</html>
```

```java
// App1_1.java
//package ch01; // javac Error: Could not find or load main class App1_1
import java.io.*;
public class App1_1
{
 public static void main(String[] args) {
  char c = ' '; // w: char c = ''; error: empty character literal; error: unclosed character literal
  System.out.println("please input a character: ");
  try {
   c = (char)System.in.read();
  }catch(IOException s) {
   System.out.println("the character you input is: "+c);
  }
 }
}
```
```java
//filename:App2_1.java
public class App2_1 {
 public static void main(String[] args) {
  System.out.println("hello java !");
 }
}
```
```java
// datatype.java
public class datatype { // Class Name must be upper character? lower letter compile passed.
 public static void main(String[] args) {
  int c = 20320;
  char s = (char)c;
  double min = -Double.MAX_VALUE;
  String zhuanyizifu = "\f \b \n \r \t \\ \' \" \uxxxx \ddd"; // wrong: \uxxxx \dddd; edit: \ufe8e \d73
  String zhuanyi = "\\uxxx"+"\\ddd"
  String string1 = "Hello! Miss Wu! \n";
  final int MAX = 10;
  final float PI = 3.14f;
  
  int i,j,k;
  int i1 = 0; // error: variable i is already defined in method main(String[])
  float x = 3.14f;
  double y = 3.1415926; // wrong: float y = 3.1415926; error: incompatible types: possible lossy conversion from double to float
  boolean truth = true;
  char c1 = 'A';
  
  byte b = 55;
  short s1 = 128;
  boolean t = true;
  int x1, y = 8;
 }
}
```
