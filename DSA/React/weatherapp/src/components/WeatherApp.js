import React, { useEffect, useState } from "react";
import "./css/style.css";

const WeatherApp = () => {

    const [city, setCity] = useState(null);
    const [search,setSearch] = useState("Mumbai");

    useEffect( () => {
        const fetchApi = async () => {
            const url = `https://api.openweathermap.org/data/2.5/weather?q=${search}&units=metric&appid=9cda51cdb652c6dcec427bd011b7242c` ;
            const response = await fetch(url);
            const resJson = await response.json();
            setCity(resJson.main);
        }

        fetchApi();
    }, [search] )

    return(
        <>
            <div className="box">
                    <div className="inputData"><h2>City:</h2>
                        <input type="search" value={search} className="inputField" onChange={ (event) => {
                            setSearch(event.target.value)
                        } }/>
                    </div>
                {!city ? (<p className="errorMsg">No Data Found</p>) :
                    (
                        <div>
                            <div className="info">
                            <h2 className="location">
                            <i className="fas fa-street-view">{search}</i></h2>
                            <h1 className="temp">{city.temp}°C</h1>
                            <h3 className="tempmin_max">Min : {city.temp_min}°C | Max : {city.temp_max}°C</h3>
                            </div>
                            <div className="wave -one"></div>
                            <div className="wave -two"></div>
                            <div className="wave -three"></div>
                        </div>
                    )                
                }

                
            </div>

        </>
    )
}

export default WeatherApp; 