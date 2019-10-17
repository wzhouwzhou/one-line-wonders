const reverse = s => s.length && `${reverse(s.slice(1))}${s[0]}` || s;
