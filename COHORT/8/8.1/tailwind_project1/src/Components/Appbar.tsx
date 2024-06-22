import { Searchbar } from "./Searchbar"

export const Appbar = () => {
    return <div className="flex justify-between">
        <div className="text-3xl font-bold text-red-500 p-2">
            YOUTUBE
        </div>
        <div className="p-2">
            <Searchbar />
        </div>
        <div className="p-2">
            <button type="button" className="text-gray-900 bg-white border border-gray-300 focus:outline-none hover:bg-gray-100 focus:ring-4 focus:ring-gray-100 font-medium rounded-full text-sm px-5 py-2.5 me-2 mb-2 dark:bg-gray-800 dark:text-white dark:border-gray-600 dark:hover:bg-gray-700 dark:hover:border-gray-600 dark:focus:ring-gray-700">Sign in</button>
        </div>
    </div>
}