function wordFrequency() {
   awk '
     BEGIN { FS="[^a-zA-Z]+" } {
         for (i=1; i<=NF; i++) {
             word = tolower($i)
             words[word]++
         }
     }
     END {
         for (w in words){
                if (w !='\n')
                  print w , words[w]


         }

     } ' |sort -k2 -r -n
}

cat words.txt |wordFrequency
