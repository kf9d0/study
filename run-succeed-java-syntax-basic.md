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
```
