function validate(frm) {
    let name=frm.pname.value;
    let age=frm.page.value;
    let mob=frm.pmob.value;
    let mflag=frm.validateflag.value;
    let flag=true;
    
    if(name=="")
        {
        document.getElementById("pnameerr").innerHTML="Name not empty";
        frm.pname.focus();
        flag==false;
        }
    if(age=="")
    {
    document.getElementById("pagerr").innerHTML="age not empty";
    frm.page.focus();
    flag==false;
    }
    else if(isNaN(age)) {
        document.getElementById("pagerr").innerHTML="Age should numeric";
        frm.page.focus();
        flag==false;
    }
    if(mob=="")
    {
    document.getElementById("pmoberr").innerHTML="Mobile not empty";
    frm.pmob.focus();
    flag==false;
    }
    else if( mob.length() < 10 || mob.length()>10) {
        document.getElementById("pmoberr").innerHTML="Mob only have 10 digits";
        frm.pmob.focus();
        flag==false;
    }
    frm.validateflag.value="true";
    return flag;
}