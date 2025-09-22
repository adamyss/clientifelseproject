#include <iostream>
#include <string>
#include <ctime>
using namespace std;
  enum topic{
      math,
      english,
      spanish  
    };
    string mathQuestions[] = {"What is 5 + 3?",
  "What is 7 * 8?",
  "What is 12 - 4?",
  "What is 25 / 5?",
  "What is 9 * 6?",
  "What is 15 + 10?",
  "What is 18 / 3?",
  "What is 100 - 75?",
  "What is 36 / 6?",
  "What is 50 * 2?",
  "What is 48 / 8?",
  "What is 14 + 9?",
  "What is 32 / 4?",
  "What is 7 * 9?",
  "What is 100 / 20?",
  "What is 27 - 8?",
  "What is 21 / 7?",
  "What is 45 + 5?",
  "What is 28 * 2?",
  "What is 72 / 9?",
  "What is 63 - 21?",
  "What is 16 * 3?",
  "What is 88 / 11?",
  "What is 5 * 5?",
  "What is 54 / 9?"};
    string mathAnswers[] = {  "8",
  "56",
  "8",
  "5",
  "54",
  "25",
  "6",
  "25",
  "6",
  "100",
  "6",
  "23",
  "8",
  "63",
  "5",
  "19",
  "3",
  "50",
  "56",
  "8",
  "42",
  "48",
  "8",
  "25",
  "6"};
    string englishQuestions[] = {
  "What is the plural form of 'child'?",
  "What is the past tense of 'run'?",
  "Which word is an antonym for 'happy'?",
  "What is the synonym for 'big'?",
  "What is the adjective in the sentence: 'She wore a beautiful dress'?",
  "Which word is a verb in the sentence: 'He sings every morning'?",
  "What is the past tense of 'eat'?",
  "Which word is an adverb in the sentence: 'She runs quickly'?",
  "What is the opposite of 'short'?",
  "What is the plural form of 'mouse'?",
  "Which sentence is correct? 'She can sings well' or 'She can sing well'?",
  "What is the comparative form of 'good'?",
  "What is the superlative form of 'fast'?",
  "Which of the following is a noun? 'Car', 'Run', 'Quickly'?",
  "What is the subject in the sentence: 'The cat jumped over the wall'?",
  "Which word is an interjection? 'Wow', 'Quick', 'Nice'?",
  "What part of speech is 'always'?",
  "Which of these is a proper noun? 'dog', 'paris', 'city'?",
  "What is the possessive form of 'it'?",
  "What is the definition of a conjunction?",
  "Which sentence uses 'there' correctly? 'There going to the park' or 'They're going to the park'?",
  "What is the past tense of 'write'?",
  "What is the plural form of 'baby'?",
  "What is the meaning of 'synonym'?",
  "Which word is a preposition in the sentence: 'The book is on the table'?"};
    string englishAnswers[] = { "children",
  "ran",
  "sad",
  "large",
  "beautiful",
  "sings",
  "ate",
  "quickly",
  "tall",
  "mice",
  "she can sing well",
  "better",
  "fastest",
  "car",
  "the cat",
  "wow",
  "adverb",
  "paris",
  "its",
  "a word that connects clauses or sentences",
  "they're going to the park",
  "wrote",
  "babies",
  "words with similar meanings",
  "on"};
    string spanishQuestions[] = {  "como se dice 'talk' en espanol",
    "que significa 'libro' en espanol",
    "como se dice 'apple' en espanol",
    "que significa 'rojo' en espanol",
    "como se dice 'house' en espanol",
    "que significa 'gato' en espanol",
    "como se dice 'water' en espanol",
    "que significa 'feliz' en espanol",
    "como se dice 'friend' en espanol",
    "que significa 'cielo' en espanol",
    "como se dice 'dog' en espanol",
    "que significa 'estrella' en espanol",
    "como se dice 'book' en espanol",
    "que significa 'flor' en espanol",
    "como se dice 'fish' en espanol",
    "que significa 'noche' en espanol",
    "como se dice 'school' en espanol",
    "que significa 'agua' en espanol",
    "como se dice 'car' en espanol",
    "que significa 'verde' en espanol",
    "como se dice 'sun' en espanol",
    "que significa 'pan' en espanol",
    "como se dice 'family' en espanol",
    "que significa 'rojo' en espanol",
    "como se dice 'tree' en espanol"};
    string spanishAnswers[] = { "hablar",
    "book",
    "manzana",
    "red",
    "casa",
    "cat",
    "agua",
    "happy",
    "amigo",
    "sky",
    "perro",
    "star",
    "libro",
    "flower",
    "pez",
    "night",
    "escuela",
    "water",
    "coche",
    "green",
    "sol",
    "bread",
    "familia",
    "red",
    "arbol"
};
string generateQuestion(int number,topic top){
     if(top == math){
        return mathQuestions[number];
    } else if(top == english){
      return englishQuestions[number];
    } else{
       return spanishQuestions[number];
    }

}
string generateSolution(int number,topic top){
       if(top == math){
        return mathAnswers[number];
    } else if(top == english){
      return englishAnswers[number];
    } else{
       return spanishAnswers[number];
    }
}
int main()
{
    srand(time(0));
    int questionAmount = 0;
    int correct = 0;
    string input = "";
    topic chosenTopic = math;
    int arrayLength = 25;
    cout << "How many questions would you like to be asked" << endl;
    cin >> questionAmount;
    cin.ignore();
    cout << "What topic would you like math english or spanish (plz type in all lowercase)?" << endl;
    cin >> input;
    cin.ignore();
    if(input == "math"){
        chosenTopic = math;
    } else if(input == "english"){
        chosenTopic = english;
    } else{
        chosenTopic = spanish;
    }
    for (int i = 0; i < questionAmount; i++){
         int num = rand() % (arrayLength - 0 + 1) + 0;
        cout << generateQuestion(num,chosenTopic) << " Please type in all lowercase" << endl;
        cin >> input;
        cin.ignore();
        string solution = generateSolution(num,chosenTopic);
        if (input == solution){
            correct += 1;
            cout << "YOU GOT THE ANSWER CORRECT" << endl;
        } else{
            cout << "YOU GOT THE QUESTION WRONG D: the correct answer was: " << solution << endl;
        }
    }
    cout << "OUT OF " << questionAmount << " QUESTIONS, YOU GOT " << correct <<" ANSWERS CORRECT";
    return 0;
}
