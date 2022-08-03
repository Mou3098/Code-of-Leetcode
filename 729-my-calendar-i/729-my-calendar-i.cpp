class MyCalendar {
    private:
    vector<pair<int, int>> calendar;
 bool overlapped(const pair<int, int>&pa, const pair<int, int>& pb){
        return ((pa.first >= pb.first) && (pa.first < pb.second)) ||
               ((pa.second > pb.first) && (pa.second <= pb.second)) ||
               ((pb.first >= pa.first) && (pb.first < pa.second)) ||
               ((pb.second > pa.first) && (pb.second <= pa.second));
    }
public:
    MyCalendar() {
         calendar.clear();
    }
    
    bool book(int start, int end) {
        pair<int, int> newp = make_pair(start, end);
        for(pair<int, int> p: calendar)
            if(overlapped(p, newp))
                return false;

        calendar.push_back(newp);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */