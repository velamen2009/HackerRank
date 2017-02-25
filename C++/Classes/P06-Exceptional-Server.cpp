		/* Enter your code here. */
        try
        {
            long long R = Server::compute(A,B);
            cout << R << endl;
        }
        catch(bad_alloc&){ cout << "Not enough memory" << endl; }
        catch(exception &e){ cout << "Exception: " << e.what() << endl; }
        catch(...){ cout << "Other Exception" << endl; }