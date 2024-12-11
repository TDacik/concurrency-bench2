PATHS="dl/*.c no-dl/*.c"

# Remove trailing whitespaces
find $PATHS -type f -print0 | xargs -0 perl -pi -e 's/ +$//'

# Replace symbol '$' with '_'
sed -i 's/\$/_/g' dl/*.c no-dl/*.c
