// Create a railways ticket counter and allot ticket to first come first take using c++ STL

#include <iostream>
#include <queue>

class TicketCounter {
private:
    std::queue<int> ticketQueue;
    int nextTicketNumber;

public:
    TicketCounter() : nextTicketNumber(1) {}

    void generateTicket() {
        ticketQueue.push(nextTicketNumber);
        std::cout << "Ticket " << nextTicketNumber << " generated." << std::endl;
        nextTicketNumber++;
    }

    void allotTicket() {
        if (!ticketQueue.empty()) {
            int ticketNumber = ticketQueue.front();
            ticketQueue.pop();
            std::cout << "Allotting Ticket " << ticketNumber << "." << std::endl;
        } else {
            std::cout << "No tickets left to allot." << std::endl;
        }
    }
};

int main() {
    TicketCounter counter;

    counter.generateTicket();
    counter.generateTicket();
    counter.generateTicket();

    counter.allotTicket();
    counter.allotTicket();
    counter.allotTicket();
    counter.allotTicket();

    return 0;
}
