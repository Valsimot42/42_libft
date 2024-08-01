#!/bin/bash

# Array of test files
test_files=(
    "ft_isalpha.c"
    "ft_isdigit.c"
    "ft_isalnum.c"
    "ft_isascii.c"
    "ft_isprint.c"
    "ft_strlen.c"
    "ft_memset.c"
    "ft_bzero.c"
    "ft_memcpy.c"
    "ft_memmove.c"
    "ft_strlcpy.c"
    "ft_strlcat.c"
    "ft_toupper.c"
    "ft_tolower.c"
    "ft_strchr.c"
    "ft_strrchr.c"
    "ft_strncmp.c"
    "ft_memchr.c"
    "ft_memcmp.c"
    "ft_strnstr.c"
    "ft_atoi.c"
    "ft_calloc.c"
    "ft_strdup.c"
    "ft_substr.c"
    "ft_strjoin.c"
    "ft_strtrim.c"
    "ft_split.c"
    "ft_itoa.c"
    "ft_strmapi.c"
    "ft_striteri.c"
    "ft_putchar_fd.c"
    "ft_putstr_fd.c"
    "ft_putendl_fd.c"
    "ft_putnbr_fd.c"
)

# Pagination settings
page_size=10
total_files=${#test_files[@]}
total_pages=$(( (total_files + page_size - 1) / page_size ))

# Function to display a page of test files
display_page() {
    local page=$1
    local start=$(( (page - 1) * page_size ))
    local end=$(( start + page_size - 1 ))
    if [ $end -ge $total_files ]; then
        end=$(( total_files - 1 ))
    fi

    echo "Please select a test file to run (Page $page of $total_pages):"
    for i in $(seq $start $end); do
        echo "$((i + 1)). ${test_files[$i]}"
    done
    if [ $page -lt $total_pages ]; then
        echo "n. Next page"
    fi
    if [ $page -gt 1 ]; then
        echo "p. Previous page"
    fi
    echo "m. Return to main menu"
    echo "q. Quit"
}

# Function to display the welcome menu
display_welcome_menu() {
    echo "Welcome to the \"Bolky Tester\""
    echo "Please enter the number depending on what you want to do:"
    echo "1. Tester"
    echo "2. Subject"
    echo "3. Credits"
    echo "4. Exit"
}

# Initial page
current_page=1

# Display the welcome menu
while true; do
    clear
    display_welcome_menu

    # Read user input
    read -p "Enter your choice: " main_choice

    case $main_choice in
        1)
            # Tester
            while true; do
                clear
                display_page $current_page

                # Read user input
                read -p "Enter your choice: " choice

                # Handle navigation
                if [[ $choice == "n" ]]; then
                    if [ $current_page -lt $total_pages ]; then
                        current_page=$(( current_page + 1 ))
                        clear
                    else
                        clear
                        echo "You are already on the last page."
                    fi
                elif [[ $choice == "p" ]]; then
                    if [ $current_page -gt 1 ]; then
                        current_page=$(( current_page - 1 ))
                        clear
                    else
                        clear
                        echo "You are already on the first page."
                    fi
                elif [[ $choice == "m" ]]; then
                    break
                elif [[ $choice == "q" ]]; then
                    echo "Exiting."
                    exit 0
                elif [[ $choice =~ ^[0-9]+$ ]]; then
                    if [[ $choice -lt 1 || $choice -gt $total_files ]]; then
                        clear
                        echo "Invalid choice. Please try again."
                    else
                        selected_test=${test_files[$((choice - 1))]}
                        clear
                        # Run the test using make
                        make run_test TEST=$selected_test
                        echo "Test completed, press enter to return to the menu."
                        read -p ""
                        clear
                    fi
                else
                    clear
                    echo "Invalid input. Please try again."
                fi
            done
            ;;
        2)
            # Subject
            while true; do
                clear
                echo "Subject feature is not implemented yet."
                echo "m. Return to main menu"
                read -p "Press enter to return to the menu or enter 'm' to return to the main menu: " subject_choice
                if [[ $subject_choice == "m" ]]; then
                    break
                fi
            done
            ;;
        3)
            # Credits
            while true; do
                clear
                echo "Credits feature is not implemented yet."
                echo "m. Return to main menu"
                read -p "Press enter to return to the menu or enter 'm' to return to the main menu: " credits_choice
                if [[ $credits_choice == "m" ]]; then
                    break
                fi
            done
            ;;
        4)
            # Exit
            echo "Exiting."
            exit 0
            ;;
        *)
            clear
            echo "Invalid input. Please try again."
            ;;
    esac
done