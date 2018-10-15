const pageQueryParams = () => document.location.search.replace(/(^\?)/,'').split('&').reduce(function(o,n) { n=n.split('='); o[n[0]]=n[1]; return o},{});
