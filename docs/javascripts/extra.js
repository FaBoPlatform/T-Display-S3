window.onload = function() {
    var tag = document.getElementsByTagName('img');
    for (var i = 0; i < tag.length; i++) {
        if(tag[i].alt == "YOUTUBE") {
        	var src = tag[i].src;
        	src = src.match(".+/(.+?)$")[1];
        	var out = "";
        	out += "<div class=\"youtube\">";
        	out += "<iframe width=\"853\" height=\"480\" ";
        	out += "src=\"https://www.youtube-nocookie.com/embed/";
        	out += src;
        	out += "\" ";
        	out += "frameborder=\"0\" allow=\"accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture\" allowfullscreen></iframe>";
        	out += "</div>";
        	tag[i].outerHTML = out;
        }
    }
}
document.addEventListener("DOMContentLoaded", function() {
    var codeBlocks = document.querySelectorAll('pre > code');
    codeBlocks.forEach(function(codeBlock) {
        var button = document.createElement('button');
        button.className = 'copy-button';
        button.title = 'コードをコピー';
        codeBlock.parentNode.appendChild(button);

        button.addEventListener('click', function() {
            var range = document.createRange();
            range.selectNodeContents(codeBlock);
            window.getSelection().removeAllRanges();
            window.getSelection().addRange(range);
            document.execCommand('copy');
            window.getSelection().removeAllRanges();
            alert('コードをコピーしました');
        });
    });
});
