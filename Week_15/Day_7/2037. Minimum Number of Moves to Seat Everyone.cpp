class Solution {
    public:
        int minMovesToSeat(vector<int>& seats, vector<int>& students) {
            sort(seats.begin(), seats.end());
            sort(students.begin(), students.end());
            int cal = 0;
            for(int i=0; i<students.size(); i++)
            {
                cal+= abs(seats[i]-students[i]);
            }
            return cal;
        }
    };