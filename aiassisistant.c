#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char input[100];
    time_t t;
    struct tm *current_time;

    printf("Welcome! I am your simple AI Assistant.\n");
    printf("Ask me anything (weather / time / hello / bye):\n");

  
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    
    if (strcmp(input, "hello") == 0) {
        printf("Hello! How can I help you today?\n");
    }

    else if (strcmp(input, "time") == 0) {
        t = time(NULL);
        current_time = localtime(&t);
        printf("Current time is: %02d:%02d:%02d\n",
               current_time->tm_hour,
               current_time->tm_min,
               current_time->tm_sec);
    }

    else if (strcmp(input, "weather") == 0) {
        printf("Today's weather looks great! (This is a dummy message as C cannot fetch real weather)\n");
    }

    else if (strcmp(input, "bye") == 0) {
        printf("Goodbye! Take care.\n");
    }

    else {
        printf("Sorry, I don't understand this command.\n");
    }

    return 0;
}

