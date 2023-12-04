#!/bin/bash

display_date_time() {
  date
}

display_system_uptime() {
  uptime
}

display_logged_in_users() {
  echo "logged In Users :"
ps aux| grep -E '^' $user
}

while true; do
  echo "Menu:"
  echo "1. Display current date and time"
  echo "2. Display system uptime"
  echo "3. Display information about logged in users"
  echo "4. Exit"

  read -p "Enter your choice: " choice

  case $choice in
    1)
      display_date_time
      ;;
    2)
      display_system_uptime
      ;;
    3)
      display_logged_in_users
      ;;
    4)
      echo "Exiting the script. Goodbye!"
      exit 0
      ;;
    *)
      echo "Error: Invalid choice. Please enter a valid option (1-4)."
      ;;
  esac
done
