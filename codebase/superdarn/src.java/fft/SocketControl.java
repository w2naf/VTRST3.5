/* SocketControl.java
   ================== 
   Author: R.J.Barnes
*/


/*
 $License$
*/




import java.awt.*;
import java.lang.*;
import java.io.*;
import java.net.*;

public class SocketControl {
  boolean state=false;
  InputStream in=null;
  Socket s=null;
 
  String host;
  URL portId;

  public void dispose() {
    this.closeSocket();
    s=null;
    in=null;
  }

  public SocketControl(String host,URL portId) {
   this.host=host;
   this.portId=portId;
  }


  public InputStream openSocket() {
    this.s=null;
    this.in=null;
    this.state=false;
    int port=0;

    if ((host==null) || (portId==null)) {
      System.err.println("Null pointers passed to openSocket");
      return null;
    }

    try {
      URLConnection u=portId.openConnection();
      BufferedReader in=new BufferedReader(new InputStreamReader(
                                           u.getInputStream()));
      String line=in.readLine();
      in.close();
      port=Integer.valueOf(line).intValue();
    } catch (IOException e) {
      System.err.println("Failed to read port ID:"+e.toString());
      return null;
    }

    try {
      this.s=new Socket(host,port);
      this.in=s.getInputStream();
      this.state=true;
    } catch (IOException e) {
      System.err.println("Failed to open socket:"+e.toString());
      return null;
    }
    System.err.println("Socket is Open");
    return in;
  }

  public void closeSocket() {
     try {
       if (in !=null) in.close();
       if (s !=null) s.close();
       this.state=false;
     } catch (IOException e) {
       System.err.println("Failed to close Socket:"+e.toString());
       return;
     }
     System.err.println("Socket is Closed");
  }

  public boolean isOpen() {
    return state;
  }

}
  












