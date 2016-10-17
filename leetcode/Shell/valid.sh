while IFS= read line
do
  if [[ $line =~ ^[0-9]{1,3}\-[0-9]{1,3}\-[0-9][0-9][0-9][0-9]$ ]]; then
    echo $line
  elif [[ $line =~ ^\([0-9]{1,3}\)\ [0-9]{1,3}\-[0-9][0-9][0-9][0-9]$ ]]; then
      echo $line
  fi

done <"file.txt"
