class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    SeatManager(int n) {
        for(int i = 1; i<=n; i++) {
            pq.push(i); //nlogn
        }
    }
    
    int reserve() {
        int seat = pq.top(); 
        pq.pop(); //logn
        return seat;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber); //logn
    }
};
