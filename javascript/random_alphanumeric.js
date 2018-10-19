var randomAlphaNumeric = (len) => {  for(var rdmString =""; rdmString.length < len; ) rdmString  += Math.random().toString(36).substr(2);  return rdmString.substr(0, len) };

//randomAlphaNumeric(4)
//"88qh"