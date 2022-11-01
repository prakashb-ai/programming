import java.awt.*; import java.applet.*;
/* <applet code="LoginPage" width=200 height=150>
</applet> */
public class LoginPage extends Applet
{ public void init()
{ Label l0 = new Label(" LOGIN PAGE ");
Label l1 = new Label("User ID: ");
Label l2 = new Label(); l2.setText("Password: ");
TextField t1=new TextField(10);
TextField t2=new TextField(10);
add(l0); add(l1); add(t1); add(l2);
add(t2);
add(new Button("Login")); add(new Button("Cancel"));
}
}