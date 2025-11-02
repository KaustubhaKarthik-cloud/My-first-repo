#include <stdio.h>
#ifdef _WIN32
#include <windows.h>  // Sleep(ms)
#else
#include <unistd.h>   
#endif

// Cross-platform sleep for milliseconds
void msleep(int ms) {
#ifdef _WIN32
    Sleep(ms);
#else
    usleep(ms * 1000);  // usleep takes microseconds
#endif
}

int main() {
    const char *lyrics[] = {
        "LOVE ME NOT",
        "",
        "And, oh, Its hard to see you",
        "But I Wish you were right here",
        "oh, Its hard to leave you",
        "When i get you Everywhere",
        "All this time I'm thinking",
        "We could never be a pair",
        "Oh, no I dont need you...",
        "But i miss you, Come here"
       
    };

    float delays[] = {
        0.5, 0.5, 0.5, 0.5,  0.5, 0.5, 0.5,  0.5,  0.5, 0.5,  
    };

    int num_lines = sizeof(lyrics) / sizeof(lyrics[0]);
    const int char_delay_ms = 50; 

    printf(" Singing 'Love me Not'\n\n");

    for (int i = 0; i < num_lines; i++) {
        const char *line = lyrics[i];

        // Print each character with delay
        for (int j = 0; line[j] != '\0'; j++) {
            putchar(line[j]);
            fflush(stdout);       
            msleep(char_delay_ms); // Delay between chars
        }
        putchar('\n');

        // Delay after each line
        #ifdef _WIN32
        Sleep(delays[i] * 1000);
        #else
        sleep(delays[i]);
        #endif
    }

    return 0;
}



