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
public class App2 extends java.applet.Applet {
 
 int x,y;
 
 public void init() {
  x=8,y=7;
 }
 
 public void paint(java.awt.Graphics g) {
  g.drawString("the class define two variables: x=8 y=7",50,60);
  g.drawString("sum is: "+(x+y),50,80);
  g.drawString("subtraction is: "+(x-y),50,100);
 }
}
// javac App2.java
// java App2 //Wrong
// vimx page1.html
// <html><body><applet code=App2.class width=250 height=150></applet></body></html>
// Open page1.html with a broswer
// OR // appletviewer page1.html
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
  
  
```
