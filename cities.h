#pragma once
#include <string>
#include <vector>
#include <tuple>

// 50 major Indian cities (index 0-49)
const std::vector<std::string> CITIES = {
    "Delhi",        "Mumbai",       "Chennai",      "Kolkata",      "Bangalore",
    "Hyderabad",    "Ahmedabad",    "Pune",         "Jaipur",       "Lucknow",
    "Kanpur",       "Nagpur",       "Indore",       "Bhopal",       "Patna",
    "Vadodara",     "Ludhiana",     "Agra",         "Nashik",       "Varanasi",
    "Surat",        "Meerut",       "Faridabad",    "Rajkot",       "Kalyan",
    "Amritsar",     "Allahabad",    "Visakhapatnam","Coimbatore",   "Madurai",
    "Jodhpur",      "Raipur",       "Kochi",        "Chandigarh",   "Guwahati",
    "Thiruvananthapuram","Mysore",  "Ranchi",       "Jabalpur",     "Gwalior",
    "Aurangabad",   "Solapur",      "Hubli",        "Tiruchirappalli","Bareilly",
    "Moradabad",    "Jalandhar",    "Bhubaneswar",  "Salem",        "Warangal"
};

// Edges: {city1_index, city2_index, distance_km}
const std::vector<std::tuple<int,int,int>> EDGES = {
    // Delhi connections
    {0, 8,  281}, {0, 17, 206}, {0, 9,  497}, {0, 22, 25},
    {0, 21, 70},  {0, 33, 244}, {0, 25, 446}, {0, 6,  935},
    {0, 39, 321}, {0, 44, 252},

    // Mumbai connections
    {1, 7,  149}, {1, 18, 167}, {1, 20, 263}, {1, 11, 838},
    {1, 40, 335}, {1, 41, 399}, {1, 6,  524}, {1, 15, 410},

    // Chennai connections
    {2, 4,  346}, {2, 5,  627}, {2, 28, 497}, {2, 29, 460},
    {2, 43, 320}, {2, 48, 340}, {2, 32, 679},

    // Kolkata connections
    {3, 14, 580}, {3, 47, 438}, {3, 37, 400}, {3, 19, 676},
    {3, 34, 1031},{3, 27, 785},

    // Bangalore connections
    {4, 5,  569}, {4, 36, 139}, {4, 32, 361}, {4, 42, 425},
    {4, 41, 533},

    // Hyderabad connections
    {5, 11, 503}, {5, 31, 534}, {5, 27, 625}, {5, 49, 157},
    {5, 40, 481},

    // Ahmedabad connections
    {6, 15, 100}, {6, 23, 218}, {6, 20, 263}, {6, 13, 490},

    // Pune connections
    {7, 18, 209}, {7, 41, 253}, {7, 11, 704},

    // Jaipur connections
    {8, 39, 336}, {8, 30, 332}, {8, 13, 561}, {8, 17, 233},

    // Lucknow connections
    {9, 10, 82},  {9, 19, 286}, {9, 26, 199}, {9, 14, 528},
    {9, 44, 346},

    // Kanpur connections
    {10, 17, 435},{10, 26, 193},{10, 19, 329},

    // Nagpur connections
    {11, 13, 357},{11, 31, 252},{11, 38, 295},{11, 12, 466},

    // Indore connections
    {12, 13, 91}, {12, 38, 370},{12, 6,  397},

    // Bhopal connections
    {13, 38, 281},{13, 39, 118},

    // Patna connections
    {14, 19, 246},{14, 37, 329},{14, 26, 679},

    // Vadodara connections
    {15, 20, 153},{15, 18, 392},

    // Ludhiana connections
    {16, 46, 61}, {16, 25, 139},{16, 33, 96},

    // Agra connections
    {17, 39, 115},{17, 26, 420},

    // Amritsar connections
    {25, 46, 75}, {25, 33, 229},

    // Allahabad connections
    {26, 19, 130},{26, 37, 589},

    // Visakhapatnam connections
    {27, 47, 441},{27, 31, 672},

    // Coimbatore connections
    {28, 29, 212},{28, 36, 209},{28, 48, 160},

    // Madurai connections
    {29, 35, 278},{29, 43, 132},

    // Jodhpur connections
    {30, 23, 420},{30, 8,  332},

    // Raipur connections
    {31, 37, 360},{31, 47, 556},

    // Kochi connections
    {32, 35, 205},{32, 36, 151},

    // Chandigarh connections
    {33, 16, 96},

    // Guwahati connections
    {34, 3,  1031},

    // Ranchi connections
    {37, 47, 370},{37, 3,  400},

    // Jabalpur connections
    {38, 31, 467},

    // Gwalior connections
    {39, 17, 115},

    // Bhubaneswar connections
    {47, 27, 441},

    // Salem connections
    {48, 2,  340},

    // Warangal connections
    {49, 31, 389}
};
