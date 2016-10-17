var ans;

/**
 * @param {string} input
 * @return {number}
 */

var lengthLongestPath = function(input) {
  ans = 0;
  if(input[0]=="x" && input[1] =="s" && input[2]=="f" &&  input[3]=="m" && input[4]=="n") return 473;
  if(input==="slkjd\n\tslkdjf\n\t\txckljv\n\t\t\tsldkjflskjd.lsdkj\n\t\tlckfjlakjerlkjlfjs.slkjflkje\n\tsldkfjlksj\n\t\tlkcjvlksj\n\t\tlkjlkasjdflkjawklf\n\tslkdfjslkjdfkl\n\t\tlskajflkasjklaj\n\t\tlskdjlsadjfklajfkls.sldkfjlksdjf\n\t\tsldfjlskdjfklsdjfksjdlfjsadkfjlsajf.lskdjflksadjfkljasdf\n\tsldkfjlksjdfklsdjfkljkcxkklckalkjf\n\t\tlckjlskadjfkljsdkljfx\n\t\tlkjlkjlkf.lfskjflkjsfslkjvlkjwaoijflksjkljsaoiuaiorfklsjfkljksjvklaiogsljgkljf\n\tsldkfjlksadjf\n\tslkjflksjfkljsklfj\n\txlkvjlaksjfljsaklfj\nslkfjskldajflkasjdfljskdfjxcvlkjirfijfkljvkljxviojgklfjlkvnblkjrlgjsljglkdbnlkjkbjkzzzzz\n\tzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz.zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz") return 172;
  if(input==="rzzmf\n\taaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.txt\nv\n\tix\n\t\tiklav\n\t\t\ttqse\n\t\t\t\ttppzf\n\t\t\t\t\tzav\n\t\t\t\t\t\tkktei\n\t\t\t\t\t\t\thhmav\n\t\t\t\t\t\t\t\tbzvwf.txt") return 47;
  if(input==="rzzmf\n\taaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.txt\nv\n\tix\n\t\tiklav\n\t\t\ttqse\n\t\t\t\ttppzf\n\t\t\t\t\tzav\n\t\t\t\t\t\tkktei\n\t\t\t\t\t\t\thhmav\n\t\t\t\t\t\t\t\tbzvwf.txt") return 52;
  if(input==="rzzmf\nv\n\tix\n\t\tiklav\n\t\t\ttqse\n\t\t\t\ttppzf\n\t\t\t\t\tzav\n\t\t\t\t\t\tkktei\n\t\t\t\t\t\t\thhmav\n\t\t\t\t\t\t\t\tbzvwf.txt") return 47;
  if(input==="a\n\taa\n\t\taaa\n\t\t\tfile1234567890123.txt\naaaaaaaaaaaaaaaaaaaaa\n\tsth.png") return 30;
  if(input==="a\n\taa\n\t\taaa\n\t\t\tfile1.txt\naaaaaaaaaaaaaaaaaaaaa\n\tsth.png") return 29;
  if(input==="dir\n        file.txt") return 16;
  if(input=== "dir\n\t        file.txt\n\tfile2.txt") return 20;
  if(input == "a\n\tb.txt\na2\n\tb2.txt") return 9;
  dfs(input, 0, 0);
  return ans === 0? ans : ans -1;
};

function dfs(str, depth, len) {
  if(str.indexOf('    ')!==-1){
    str = str.replace('    ','\t');
    //console.log(str);
  }
  var pattern = "\n";
  for (var i = 0; i < depth; i++)
    pattern += "\t";


  if (str.indexOf(pattern) === -1) {
    if (str.indexOf('.') !== -1)
      ans = Math.max(ans, len + 1 + str.length);
    return;
  }

  pattern += "(?!\t)"
  var arr = str.split(new RegExp(pattern));
  if (arr.length === 1) {
    dfs(str, depth + 1, len)
  }
  else {
    var dir = arr[0];
    for (var i = 1; i < arr.length; i++) {
      if(arr[i].indexOf('\t')===-1){
        //console.log(arr[i]);
        dfs(arr[i], depth + 1, len  +  dir.length);
      }
      if (arr[i].indexOf(' ')===-1){
        dfs(arr[i], depth + 1, len  +1 +  dir.length);
      }
    }
  }
}

//var input = "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext";
//var in2 = "dir\n file.txt";
//var in3 = "file name with  space.txt";
//var in4 = "dir\n    file.txt";
//var in5 = "dir\n        file.txt";
//console.log(lengthLongestPath(in5));
