cat /etc/passwd | cut -d '#' -f1 | cut -d ':' -f1 | awk 'NR%2==0' | rev | sort -d -r | sed -n "$FT_LINE1,$FT_LINE2 p"| tr '\n' ', ' | sed 's/[^.]$/&./'