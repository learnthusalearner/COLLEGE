import Balance from "../Components/balance"
import Topbar from "../Components/topbar"
import { Users } from "../Components/users"

const Dashboard = () =>{
    return(
    <div>
    <Topbar />
    <Balance />
    <Users />
    </div>
    )
}

export default Dashboard