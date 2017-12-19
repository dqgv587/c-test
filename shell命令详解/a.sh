#!/bin/sh

#有错误就退出
set -e

t=0


#多行注释
:<<!
echo -n "input 1-5:"
read t

if [ $t -ge 5 -a $t -le 9 ]
 then
 echo $t
fi
!

n=$(basename "$0")
echo "Usage: [sudo] $n {start|stop|restart|status}"

echo  "$(id -u)"
