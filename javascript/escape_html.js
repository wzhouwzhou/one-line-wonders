const escapeHTML = (text) =>  text.replace(/[<>&"]/g, character => ({'<': '&lt;', '>': '&gt;','&': '&amp;', '"': '&quot;'})[character]); 
