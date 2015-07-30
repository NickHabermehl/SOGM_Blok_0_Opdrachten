#! /bin/bash

if [ $# -lt 2 ]; then
echo "$0: ["Select input format" "Select output format"]"
exit
fi

INPUTFORMAT=$1
OUTPUTFORMAT=$2

if [ ! -d "$Converted" ]; then
mkdir Converted
fi
read -p "Are you sure? y/n: " USRINP
if [ ${USRINP} == "y" ]; then
case ${OUTPUTFORMAT} in
mp3)
for i in *.${INPUTFORMAT};
  do name=`echo $i | cut -d'.' -f1`;
  echo $name
  ffmpeg -i "$i" -ab 320k -acodec libmp3lame "Converted/$name.mp3";
done
;;
ogg)
for i in *.${INPUTFORMAT};
do name=`echo $i | cut -d'.' -f1`;
echo $name
ffmpeg -i "$i" -ab 320k -acodec libvorbis "Converted/$name.ogg";
done
;;
aac)
for i in *.${INPUTFORMAT};
do name=`echo $i | cut -d'.' -f1`;
echo $name
ffmpeg -i "$i" -ab 320k -acodec libfaac "Converted/$name.aac";
done
;;
ac3)
for i in *.${INPUTFORMAT};
do name=`echo $i | cut -d'.' -f1`;
echo $name
ffmpeg -i "$i" -acodec ac3 "Converted/$name.mp3";
done
;;
*)
echo "Wrong Output Format, please choose mp3 ogg aac or ac3."
;;
esac
fi