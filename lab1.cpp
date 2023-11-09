#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define the rules for selecting the components of the personal computer
vector<string> select_processor(int budget)
{
    if (budget >= 1000)
    {
        return {"Intel Core i9", "AMD Ryzen 9"};
    }
    else if (budget >= 500)
    {
        return {"Intel Core i7", "AMD Ryzen 7"};
    }
    else
    {
        return {"Intel Core i5", "AMD Ryzen 5"};
    }
}

vector<string> select_memory(int budget)
{
    if (budget >= 1000)
    {
        return {"32 GB DDR4", "64 GB DDR4"};
    }
    else if (budget >= 500)
    {
        return {"16 GB DDR4", "32 GB DDR4"};
    }
    else
    {
        return {"8 GB DDR4", "16 GB DDR4"};
    }
}

vector<string> select_storage(int budget)
{
    if (budget >= 1000)
    {
        return {"1 TB SSD", "2 TB SSD"};
    }
    else if (budget >= 500)
    {
        return {"512 GB SSD", "1 TB SSD"};
    }
    else
    {
        return {"256 GB SSD", "512 GB SSD"};
    }
}

vector<string> select_graphics_card(int budget)
{
    if (budget >= 1000)
    {
        return {"NVIDIA GeForce RTX 3080", "AMD Radeon RX 6800 XT"};
    }
    else if (budget >= 500)
    {
        return {"NVIDIA GeForce GTX 1660 Ti", "AMD Radeon RX 5600 XT"};
    }
    else
    {
        return {"NVIDIA GeForce GTX 1650", "AMD Radeon RX 5500 XT"};
    }
}

// Use the expert system to recommend a personal computer configuration
void recommend_pc(int budget, string usage)
{
    vector<string> processors = select_processor(budget);
    vector<string> memory = select_memory(budget);
    vector<string> storage = select_storage(budget);
    vector<string> graphics_card = select_graphics_card(budget);
    if (usage == "gaming")
    {
        cout << "Recommended configuration for gaming:" << endl;
        cout << "Processor: " << processors[0] << endl;
        cout << "Memory: " << memory[0] << endl;
        cout << "Storage: " << storage[0] << endl;
        cout << "Graphics card: " << graphics_card[0] << endl;
    }
    else if (usage == "video editing")
    {
        cout << "Recommended configuration for video editing:" << endl;
        cout << "Processor: " << processors[1] << endl;
        cout << "Memory: " << memory[1] << endl;
        cout << "Storage: " << storage[1] << endl;
        cout << "Graphics card: " << graphics_card[1] << endl;
    }
    else
    {
        cout << "Recommended configuration for office work:" << endl;
        cout << "Processor: " << processors[0] << endl;
        cout << "Memory: " << memory[0] << endl;
        cout << "Storage: " << storage[0] << endl;
        cout << "Graphics card: Integrated graphics" << endl;
    }
}

int main()
{
    int budget;
    string usage;
    cout << "Enter your budget in $: ";
    cin >> budget;
    cout << "Enter your usage (gaming, video editing, or office work): ";
    cin >> usage;
    recommend_pc(budget, usage);
    system("PAUSE");
    return 0;
}