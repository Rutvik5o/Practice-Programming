function hey()
{
     var a=document.getElementById("name").value;
     
     if(a=="")
     {
         document.getElementById("message").innerHTML="Please fill the mail";
         return false;
     }
    var exp=/^[a-z0-9_.]{3,}@[a-z]{3,}[.]{1}[a-z]{2,4}$/;

     //var exp=/^[a-z0-9_.]{3,}[.]{1}[a-z]{2,4}$/;
     
     if(a.match(exp))
     return true;
     else
     {
        document.getElementById("message").innerHTML="Enter valid mail address";
        return false;
     }
}