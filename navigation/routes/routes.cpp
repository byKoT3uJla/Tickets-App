//
// Created by Denis on 16.05.2024.
//

#include "routes.hpp"
#include "router.hpp"
#include <vector>
#include <about.hpp>
#include <all_tickets.hpp>
#include <reserved_ticket.hpp>

#include "../screens/all_reserved_tickets/all_reserved_tickets.hpp"

namespace Routes {
    using namespace std;

    bool quit_app() {
        exit(0);
    }

    vector<Navigation::NavPoint> screens_graph() {
        vector<Navigation::NavPoint> _graph;

        constexpr auto all_reserved_tickets = Navigation::NavPoint(1, All_Reserved_Tickets::allReservedTicketsScreen);
        constexpr auto reserved_tickets = Navigation::NavPoint(2, Reserved_Ticket::reserved_ticket_screen);
        constexpr auto all_tickets = Navigation::NavPoint(3, All_Tickets::all_tickets_screen);
        constexpr auto about = Navigation::NavPoint(4, About::about_screen);
        constexpr auto quit = Navigation::NavPoint(5, quit_app);

        _graph.push_back(all_reserved_tickets);
        _graph.push_back(reserved_tickets);
        _graph.push_back(all_tickets);
        _graph.push_back(about);
        _graph.push_back(quit);
        return _graph;
    }

}
