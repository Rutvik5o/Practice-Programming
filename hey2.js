function hey()
{
     var a=document.getElementById('name').value;

     if(a=="")
     {
        document.getElementById('msg').innerHTML="Enter the mail";
        return false;
     }

     var exp=/^[a-z0-9_.]{3,}@[a-z]{3,}[.]{1}[a-z]{2,4}$/;

     if(a.match(exp))
     return true;
     else
     {
        document.getElementById('msg').innerHTML="Invalid Mail";
        return false;
     }
     }

